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
 * OAICatalogs_product_groups_list_200_response_allOf.h
 *
 * 
 */

#ifndef OAICatalogs_product_groups_list_200_response_allOf_H
#define OAICatalogs_product_groups_list_200_response_allOf_H

#include <QJsonObject>

#include "OAICatalogsProductGroup.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICatalogsProductGroup;

class OAICatalogs_product_groups_list_200_response_allOf : public OAIObject {
public:
    OAICatalogs_product_groups_list_200_response_allOf();
    OAICatalogs_product_groups_list_200_response_allOf(QString json);
    ~OAICatalogs_product_groups_list_200_response_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICatalogsProductGroup> getItems() const;
    void setItems(const QList<OAICatalogsProductGroup> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICatalogsProductGroup> items;
    bool m_items_isSet;
    bool m_items_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogs_product_groups_list_200_response_allOf)

#endif // OAICatalogs_product_groups_list_200_response_allOf_H
