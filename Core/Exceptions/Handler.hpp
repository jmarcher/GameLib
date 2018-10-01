//
// Created by gordo on 01.10.18.
//

#ifndef GAMERPG_EXCEPTION_HANDLER_HPP
#define GAMERPG_EXCEPTION_HANDLER_HPP

namespace Core {
    class ExceptionHandler {
    protected:
        static ExceptionHandler *instance;

        ExceptionHandler();

    public:
        static ExceptionHandler *getInstance();
    };
};


#endif //GAMERPG_EXCEPTION_HANDLER_HPP
