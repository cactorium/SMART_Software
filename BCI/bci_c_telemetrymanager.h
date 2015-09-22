#ifndef BCI_C_TELEMETRYMANAGER_H
#define BCI_C_TELEMETRYMANAGER_H

//Forward Declation
class C_BCI_Package;

#include "bci_c_bci_package.h"
#include "bci_c_binary_parser.h"
#include "bci_c_textparser.h"

enum FileFormatType
{
    BINARY_FILE,
    TEXT_FILE
};

//Manage the SMART Telemetry Stream
class C_TelemetryManager : public QObject
{
    Q_OBJECT
public:
    C_TelemetryManager(C_BCI_Package* pBCI, C_EEG_IO* pEEG_IO,
                       C_BRSH_IO* pBRS_IO,  C_RVS* pRVS);
    ~C_TelemetryManager();

    static C_TelemetryManager* Instance(C_BCI_Package* pBCI, C_EEG_IO* pEEG_IO,
                                        C_BRSH_IO* pBRS_IO , C_RVS* pRVS);

    //Create a New TM Frame from the Latest Data
    TM_Frame_t* updateTM();

    //Retrieve the Latest Frame
    TM_Frame_t* GetLatestFramePtr()    { return mTMData.GetFrame(); }

    //Record Telemetry to an output File
    void RecordTMToFile(const QString& filename);

public slots:
    //Update Telemetry when a BRS Frame is Received
    void onBRSFrameReceived(BRS_Frame_t* frame) { updateTM();}

signals:
    void tmFrameCreated(TM_Frame_t* frame);

private:
    void OutputFrameToFile(TM_Frame_t* frame);

    C_BCI_Package* mBCIPackagePtr;
    C_EEG_IO*      mEEG_IOPtr;
    C_BRSH_IO*     mBRS_IOPtr;
    C_RVS*         mRVSPtr;

    //Used to Record TM to File
    C_BinaryParser* tmFile;

    //TM Data Buffer
    C_TM mTMData;

    bool recordTM;

    //Debug Logging
    SMART_DEBUG_LOG* debugLog;
};

#endif // BCI_C_TELEMETRYMANAGER_H
