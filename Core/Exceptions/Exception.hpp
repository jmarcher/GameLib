//
// Created by gordo on 01.10.18.
//

#ifndef GAMERPG_EXCEPTION_HPP
#define GAMERPG_EXCEPTION_HPP

#include <string>

#include <stdexcept>

namespace Core {
    class Exception : public std::exception {
    public:
        Exception() {
            this->code = 0;
            this->message = "Exception occurred";
        };

        Exception(std::string message, short int code) {
            this->message = message;
            this->code = code;
        };

        explicit Exception(std::string message) {
            this->message = message;
            this->code = 0;
        };

        const std::string getMessage() const {
            return this->message;
        };

        const short int getCode() const {
            return this->code;
        };
    protected:
        short int code;
        std::string message;
    };

}


#endif //GAMERPG_EXCEPTION_HPP
