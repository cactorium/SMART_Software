#ifndef BCI_C_CONNECTED_DEVICE_H
#define BCI_C_CONNECTED_DEVICE_H

#include "../smart_config.h"

class C_ConnectedDevice
{
public:
    virtual ConnectionStatusType connect() = 0;
    ConnectionStatusType GetConnectionStatus() {return connectionStatus;}

protected:
    ConnectionStatusType connectionStatus;
};

#endif // BCI_C_CONNECTED_DEVICE_H

