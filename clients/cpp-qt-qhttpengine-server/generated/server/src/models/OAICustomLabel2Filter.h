/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICustomLabel2Filter.h
 *
 * 
 */

#ifndef OAICustomLabel2Filter_H
#define OAICustomLabel2Filter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupMultipleStringCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustomLabel2Filter : public OAIObject {
public:
    OAICustomLabel2Filter();
    OAICustomLabel2Filter(QString json);
    ~OAICustomLabel2Filter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupMultipleStringCriteria getCustomLabel2() const;
    void setCustomLabel2(const OAICatalogsProductGroupMultipleStringCriteria &custom_label_2);
    bool is_custom_label_2_Set() const;
    bool is_custom_label_2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupMultipleStringCriteria custom_label_2;
    bool m_custom_label_2_isSet;
    bool m_custom_label_2_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustomLabel2Filter)

#endif // OAICustomLabel2Filter_H
