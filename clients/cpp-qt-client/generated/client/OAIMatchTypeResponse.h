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
 * OAIMatchTypeResponse.h
 *
 * Keyword match type
 */

#ifndef OAIMatchTypeResponse_H
#define OAIMatchTypeResponse_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIMatchTypeResponse : public OAIEnum {
public:
    OAIMatchTypeResponse();
    OAIMatchTypeResponse(QString json);
    ~OAIMatchTypeResponse() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIMatchTypeResponse {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        BROAD, 
        PHRASE, 
        EXACT, 
        EXACT_NEGATIVE, 
        PHRASE_NEGATIVE, 
        r_NULL
    };
    OAIMatchTypeResponse::eOAIMatchTypeResponse getValue() const;
    void setValue(const OAIMatchTypeResponse::eOAIMatchTypeResponse& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIMatchTypeResponse m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIMatchTypeResponse)

#endif // OAIMatchTypeResponse_H
