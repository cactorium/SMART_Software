#ifndef BCI_C_BINARY_PARSER_H
#define BCI_C_BINARY_PARSER_H

#include <QDataStream>
#include "bci_c_abstract_parser.h"

//Default Input/Output Filenames
const QString TM_DATA_INPUTFILE_BIN  = "../debug_files/brs_input_data.bin";
const QString TM_DATA_OUTPUTFILE_BIN = "../debug_files/brs_output_data.bin";

const QString EEG_DATA_INPUTFILE_BIN  = "../debug_files/eeg_input_data.bin";
const QString EEG_DATA_OUTPUTFILE_BIN = "../debug_files/eeg_output_data.bin";

typedef quint32 TelemetrySyncType;

class C_BinaryParser : public C_AbstractParser
{
public:
    C_BinaryParser();
    virtual ~C_BinaryParser();

    //Read/Write EEG Data
    virtual C_EEG_Data& readEEGData (const QString& filename = EEG_DATA_INPUTFILE_BIN);
    virtual void writeEEGData(const QString& filename = EEG_DATA_OUTPUTFILE_BIN);
    void writeEEGData(C_EEG_Data& data, const QString& filename = EEG_DATA_OUTPUTFILE_BIN);

    //Read/Write BRS Data
    virtual C_TM& readTMData (const QString& filename = TM_DATA_INPUTFILE_BIN);
    virtual void writeTMData(const QString& filename = TM_DATA_OUTPUTFILE_BIN);
    void writeTMData(C_TM& data, const QString& filename = TM_DATA_OUTPUTFILE_BIN);

    //Read Individual Frames
    virtual EEG_Frame_t* readEEGFrame();
    virtual TM_Frame_t*  readTMFrame();
    virtual void writeEEGFrame(EEG_Frame_t* frame);
    virtual void writeTMFrame(TM_Frame_t* frame);

    void writeRawData(char* data, sizeType size);
    bool findSync(TelemetrySyncType sync);

    //Syncs to Make sure we're reading the right data
    static const TelemetrySyncType TM_DATA_START;
    static const TelemetrySyncType TM_DATA_END;
    static const TelemetrySyncType EEG_DATA_START;
    static const TelemetrySyncType EEG_DATA_STOP;
    static const TelemetrySyncType EEG_FRAME_START;
    static const TelemetrySyncType EEG_FRAME_STOP;
    static const TelemetrySyncType TM_FRAME_START;
    static const TelemetrySyncType TM_FRAME_END;

    //Binary I/O Api
private:
    QDataStream dataIn;
    QDataStream dataOut;

    static bool eegDataStarted;
    static bool tmDataStarted;
};

#endif // BCI_C_BINARY_PARSER_H
