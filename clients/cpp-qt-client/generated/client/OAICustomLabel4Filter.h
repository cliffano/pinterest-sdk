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
 * OAICustomLabel4Filter.h
 *
 * 
 */

#ifndef OAICustomLabel4Filter_H
#define OAICustomLabel4Filter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupMultipleStringCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustomLabel4Filter : public OAIObject {
public:
    OAICustomLabel4Filter();
    OAICustomLabel4Filter(QString json);
    ~OAICustomLabel4Filter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupMultipleStringCriteria getCustomLabel4() const;
    void setCustomLabel4(const OAICatalogsProductGroupMultipleStringCriteria &custom_label_4);
    bool is_custom_label_4_Set() const;
    bool is_custom_label_4_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupMultipleStringCriteria m_custom_label_4;
    bool m_custom_label_4_isSet;
    bool m_custom_label_4_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustomLabel4Filter)

#endif // OAICustomLabel4Filter_H