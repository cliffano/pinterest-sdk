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
 * OAICustomLabel0Filter.h
 *
 * 
 */

#ifndef OAICustomLabel0Filter_H
#define OAICustomLabel0Filter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupMultipleStringCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustomLabel0Filter : public OAIObject {
public:
    OAICustomLabel0Filter();
    OAICustomLabel0Filter(QString json);
    ~OAICustomLabel0Filter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupMultipleStringCriteria getCustomLabel0() const;
    void setCustomLabel0(const OAICatalogsProductGroupMultipleStringCriteria &custom_label_0);
    bool is_custom_label_0_Set() const;
    bool is_custom_label_0_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupMultipleStringCriteria m_custom_label_0;
    bool m_custom_label_0_isSet;
    bool m_custom_label_0_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustomLabel0Filter)

#endif // OAICustomLabel0Filter_H
