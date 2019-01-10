/**
 * This file is generated by jsonrpcstub, DO NOT CHANGE IT MANUALLY!
 */

#ifndef JSONRPC_CPP_STUB_ABSTRACTMIXERSERVER_H_
#define JSONRPC_CPP_STUB_ABSTRACTMIXERSERVER_H_

#include <jsonrpccpp/server.h>

class AbstractMixerServer : public jsonrpc::AbstractServer<AbstractMixerServer>
{
    public:
        AbstractMixerServer(jsonrpc::AbstractServerConnector &conn, jsonrpc::serverVersion_t type = jsonrpc::JSONRPC_SERVER_V2) : jsonrpc::AbstractServer<AbstractMixerServer>(conn, type)
        {
            this->bindAndAddMethod(jsonrpc::Procedure("getMessage", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_STRING, NULL), &AbstractMixerServer::getMessageI);
            this->bindAndAddMethod(jsonrpc::Procedure("ping", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_BOOLEAN,  NULL), &AbstractMixerServer::pingI);
            this->bindAndAddMethod(jsonrpc::Procedure("request", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING, NULL), &AbstractMixerServer::requestI);
        }

        inline virtual void getMessageI(const Json::Value &request, Json::Value &response)
        {
            response = this->getMessage(request[0u].asString());
        }
        inline virtual void pingI(const Json::Value &request, Json::Value &response)
        {
            (void)request;
            response = this->ping();
        }
        inline virtual void requestI(const Json::Value &request, Json::Value &response)
        {
            response = this->request(request[0u].asString());
        }
        virtual bool getMessage(const std::string& param1) = 0;
        virtual bool ping() = 0;
        virtual std::string request(const std::string& param1) = 0;
};

#endif //JSONRPC_CPP_STUB_ABSTRACTMIXERSERVER_H_