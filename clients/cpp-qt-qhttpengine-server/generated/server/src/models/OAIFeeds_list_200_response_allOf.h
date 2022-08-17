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
 * OAIFeeds_list_200_response_allOf.h
 *
 * 
 */

#ifndef OAIFeeds_list_200_response_allOf_H
#define OAIFeeds_list_200_response_allOf_H

#include <QJsonObject>

#include "OAICatalogsFeed.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIFeeds_list_200_response_allOf : public OAIObject {
public:
    OAIFeeds_list_200_response_allOf();
    OAIFeeds_list_200_response_allOf(QString json);
    ~OAIFeeds_list_200_response_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICatalogsFeed> getItems() const;
    void setItems(const QList<OAICatalogsFeed> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICatalogsFeed> items;
    bool m_items_isSet;
    bool m_items_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIFeeds_list_200_response_allOf)

#endif // OAIFeeds_list_200_response_allOf_H