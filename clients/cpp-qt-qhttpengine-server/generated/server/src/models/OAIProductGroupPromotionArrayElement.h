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
 * OAIProductGroupPromotionArrayElement.h
 *
 * 
 */

#ifndef OAIProductGroupPromotionArrayElement_H
#define OAIProductGroupPromotionArrayElement_H

#include <QJsonObject>

#include "OAIException.h"
#include "OAIProductGroupPromotion.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductGroupPromotionArrayElement : public OAIObject {
public:
    OAIProductGroupPromotionArrayElement();
    OAIProductGroupPromotionArrayElement(QString json);
    ~OAIProductGroupPromotionArrayElement() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIProductGroupPromotion getData() const;
    void setData(const OAIProductGroupPromotion &data);
    bool is_data_Set() const;
    bool is_data_Valid() const;

    OAIException getExceptions() const;
    void setExceptions(const OAIException &exceptions);
    bool is_exceptions_Set() const;
    bool is_exceptions_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIProductGroupPromotion data;
    bool m_data_isSet;
    bool m_data_isValid;

    OAIException exceptions;
    bool m_exceptions_isSet;
    bool m_exceptions_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductGroupPromotionArrayElement)

#endif // OAIProductGroupPromotionArrayElement_H
