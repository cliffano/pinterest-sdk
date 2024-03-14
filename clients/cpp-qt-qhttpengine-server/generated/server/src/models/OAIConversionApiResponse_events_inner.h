/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIConversionApiResponse_events_inner.h
 *
 * 
 */

#ifndef OAIConversionApiResponse_events_inner_H
#define OAIConversionApiResponse_events_inner_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIConversionApiResponse_events_inner : public OAIObject {
public:
    OAIConversionApiResponse_events_inner();
    OAIConversionApiResponse_events_inner(QString json);
    ~OAIConversionApiResponse_events_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getStatus() const;
    void setStatus(const QString &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    QString getErrorMessage() const;
    void setErrorMessage(const QString &error_message);
    bool is_error_message_Set() const;
    bool is_error_message_Valid() const;

    QString getWarningMessage() const;
    void setWarningMessage(const QString &warning_message);
    bool is_warning_message_Set() const;
    bool is_warning_message_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString status;
    bool m_status_isSet;
    bool m_status_isValid;

    QString error_message;
    bool m_error_message_isSet;
    bool m_error_message_isValid;

    QString warning_message;
    bool m_warning_message_isSet;
    bool m_warning_message_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIConversionApiResponse_events_inner)

#endif // OAIConversionApiResponse_events_inner_H
