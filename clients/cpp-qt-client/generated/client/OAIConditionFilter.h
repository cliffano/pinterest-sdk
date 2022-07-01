/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIConditionFilter.h
 *
 * 
 */

#ifndef OAIConditionFilter_H
#define OAIConditionFilter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupMultipleStringCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIConditionFilter : public OAIObject {
public:
    OAIConditionFilter();
    OAIConditionFilter(QString json);
    ~OAIConditionFilter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupMultipleStringCriteria getCondition() const;
    void setCondition(const OAICatalogsProductGroupMultipleStringCriteria &condition);
    bool is_condition_Set() const;
    bool is_condition_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupMultipleStringCriteria condition;
    bool m_condition_isSet;
    bool m_condition_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIConditionFilter)

#endif // OAIConditionFilter_H
