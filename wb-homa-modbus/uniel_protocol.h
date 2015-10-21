#pragma once

#include <string>
#include <exception>
#include <stdint.h>

#include "serial_protocol.h"
#include "regformat.h"

class TUnielBus: public TSerialProtocol {
public:
    static const int DefaultTimeoutMs = 1000;

    TUnielBus(const TSerialPortSettings& settings);
    uint64_t ReadRegister(uint8_t mod, uint8_t address, RegisterFormat fmt);
    void WriteRegister(uint8_t mod, uint8_t address, uint64_t value, RegisterFormat fmt);

    void SetBrightness(uint8_t mod, uint8_t address, uint8_t value);

private:
    void WriteCommand(uint8_t cmd, uint8_t mod, uint8_t b1, uint8_t b2, uint8_t b3);
    void ReadResponse(uint8_t cmd, uint8_t* response);
    void DoWriteRegister(uint8_t cmd, uint8_t mod, uint8_t address, uint8_t value);
};