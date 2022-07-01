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
 * OAIItemGroupIdFilter.h
 *
 * 
 */

#ifndef OAIItemGroupIdFilter_H
#define OAIItemGroupIdFilter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupMultipleStringCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIItemGroupIdFilter : public OAIObject {
public:
    OAIItemGroupIdFilter();
    OAIItemGroupIdFilter(QString json);
    ~OAIItemGroupIdFilter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupMultipleStringCriteria getItemGroupId() const;
    void setItemGroupId(const OAICatalogsProductGroupMultipleStringCriteria &item_group_id);
    bool is_item_group_id_Set() const;
    bool is_item_group_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupMultipleStringCriteria item_group_id;
    bool m_item_group_id_isSet;
    bool m_item_group_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIItemGroupIdFilter)

#endif // OAIItemGroupIdFilter_H
