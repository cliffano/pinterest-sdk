/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIAd_groups_list_200_response_allOf.h
 *
 * 
 */

#ifndef OAIAd_groups_list_200_response_allOf_H
#define OAIAd_groups_list_200_response_allOf_H

#include <QJsonObject>

#include "OAIAdGroupResponse.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIAdGroupResponse;

class OAIAd_groups_list_200_response_allOf : public OAIObject {
public:
    OAIAd_groups_list_200_response_allOf();
    OAIAd_groups_list_200_response_allOf(QString json);
    ~OAIAd_groups_list_200_response_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIAdGroupResponse> getItems() const;
    void setItems(const QList<OAIAdGroupResponse> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIAdGroupResponse> items;
    bool m_items_isSet;
    bool m_items_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAd_groups_list_200_response_allOf)

#endif // OAIAd_groups_list_200_response_allOf_H
