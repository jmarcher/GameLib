//
// Created by gordo on 01.10.18.
//

#include "Handler.hpp"

Core::ExceptionHandler *Core::ExceptionHandler::instance = nullptr;

Core::ExceptionHandler::ExceptionHandler() {

}

Core::ExceptionHandler *Core::ExceptionHandler::getInstance() {
    if (instance == nullptr) {
        instance = new Core::ExceptionHandler();
    }

    return instance;
}
