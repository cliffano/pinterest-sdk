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
 * OAIAds_credits_discounts_get_200_response.h
 *
 * 
 */

#ifndef OAIAds_credits_discounts_get_200_response_H
#define OAIAds_credits_discounts_get_200_response_H

#include <QJsonObject>

#include "OAIAdsCreditDiscountsResponse.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAds_credits_discounts_get_200_response : public OAIObject {
public:
    OAIAds_credits_discounts_get_200_response();
    OAIAds_credits_discounts_get_200_response(QString json);
    ~OAIAds_credits_discounts_get_200_response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIAdsCreditDiscountsResponse> getItems() const;
    void setItems(const QList<OAIAdsCreditDiscountsResponse> &items);
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

    QList<OAIAdsCreditDiscountsResponse> items;
    bool m_items_isSet;
    bool m_items_isValid;

    QString bookmark;
    bool m_bookmark_isSet;
    bool m_bookmark_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAds_credits_discounts_get_200_response)

#endif // OAIAds_credits_discounts_get_200_response_H
