/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIIntegrationLogClientRequest.h
 *
 * HTTP request details included in the log sent by the client.
 */

#ifndef OAIIntegrationLogClientRequest_H
#define OAIIntegrationLogClientRequest_H

#include <QJsonObject>

#include <QMap>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIIntegrationLogClientRequest : public OAIObject {
public:
    OAIIntegrationLogClientRequest();
    OAIIntegrationLogClientRequest(QString json);
    ~OAIIntegrationLogClientRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getMethod() const;
    void setMethod(const QString &method);
    bool is_method_Set() const;
    bool is_method_Valid() const;

    QString getHost() const;
    void setHost(const QString &host);
    bool is_host_Set() const;
    bool is_host_Valid() const;

    QString getPath() const;
    void setPath(const QString &path);
    bool is_path_Set() const;
    bool is_path_Valid() const;

    QMap<QString, QString> getRequestHeaders() const;
    void setRequestHeaders(const QMap<QString, QString> &request_headers);
    bool is_request_headers_Set() const;
    bool is_request_headers_Valid() const;

    QMap<QString, QString> getResponseHeaders() const;
    void setResponseHeaders(const QMap<QString, QString> &response_headers);
    bool is_response_headers_Set() const;
    bool is_response_headers_Valid() const;

    qint32 getResponseStatusCode() const;
    void setResponseStatusCode(const qint32 &response_status_code);
    bool is_response_status_code_Set() const;
    bool is_response_status_code_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_method;
    bool m_method_isSet;
    bool m_method_isValid;

    QString m_host;
    bool m_host_isSet;
    bool m_host_isValid;

    QString m_path;
    bool m_path_isSet;
    bool m_path_isValid;

    QMap<QString, QString> m_request_headers;
    bool m_request_headers_isSet;
    bool m_request_headers_isValid;

    QMap<QString, QString> m_response_headers;
    bool m_response_headers_isSet;
    bool m_response_headers_isValid;

    qint32 m_response_status_code;
    bool m_response_status_code_isSet;
    bool m_response_status_code_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIIntegrationLogClientRequest)

#endif // OAIIntegrationLogClientRequest_H