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
 * OAIProducts_by_product_group_filter_list_200_response.h
 *
 * 
 */

#ifndef OAIProducts_by_product_group_filter_list_200_response_H
#define OAIProducts_by_product_group_filter_list_200_response_H

#include <QJsonObject>

#include "OAICatalogsProduct.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProducts_by_product_group_filter_list_200_response : public OAIObject {
public:
    OAIProducts_by_product_group_filter_list_200_response();
    OAIProducts_by_product_group_filter_list_200_response(QString json);
    ~OAIProducts_by_product_group_filter_list_200_response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICatalogsProduct> getItems() const;
    void setItems(const QList<OAICatalogsProduct> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    QString getBookmark() const;
    void setBookmark(const QString &bookmark);
    bool is_bookmark_Set() const;
    bool is_bookmark_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICatalogsProduct> items;
    bool m_items_isSet;
    bool m_items_isValid;

    QString bookmark;
    bool m_bookmark_isSet;
    bool m_bookmark_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProducts_by_product_group_filter_list_200_response)

#endif // OAIProducts_by_product_group_filter_list_200_response_H
