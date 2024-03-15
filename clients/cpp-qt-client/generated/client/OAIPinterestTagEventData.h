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
 * OAIPinterestTagEventData.h
 *
 * Optional for VISITOR &#x60;audience_type&#x60;. With the Pinterest tag, you can use event data to capture event details from your website. This object lists all the available predefined event data fields in the Pinterest tag. You can include these event data fields as part of a VISITOR audience’s &#x60;rule&#x60;; however, you **must** specify an &#x60;event&#x60; for the &#x60;event_data&#x60; fields to be evaluated. Besides what’s listed, you can also create your own set of &#x60;event_data&#x60; fields and define their usages or purposes according to your website needs. However, the benefit of using the predefined event data fields is that we can provide various metrics based on those fields&#39; data.&lt;br&gt;Examples per &#x60;event&#x60; type:&lt;br&gt;&#x60;pagevisit&#x60;&lt;br&gt;\&quot;event_data\&quot;: { \&quot;page_name\&quot;: \&quot;My online store 123 | view items | shoe\&quot; }&lt;br&gt;&#x60;signup&#x60;&lt;br&gt;\&quot;event_data\&quot;: { \&quot;lead_type\&quot;: \&quot;New release promotion\&quot; }&lt;br&gt;&#x60;checkout&#x60;&lt;br&gt;\&quot;event_data\&quot;: { \&quot;value\&quot;: 116, \&quot;order_quantity\&quot;: 2, \&quot;currency\&quot;: \&quot;USD\&quot;, \&quot;line_items\&quot;: [ { \&quot;product_name\&quot;: \&quot;Pillows (Set of 2)\&quot;, \&quot;product_id\&quot;: \&quot;11\&quot;, \&quot;product_price\&quot;: 48, \&quot;product_quantity\&quot;: 1 }, { \&quot;product_name\&quot;: \&quot;Pillows, Large (Set of 2)\&quot;, \&quot;product_id\&quot;: \&quot;15\&quot;, \&quot;product_price\&quot;: 68, \&quot;product_quantity\&quot;: 1 } ] }&lt;br&gt;&#x60;addtocart&#x60;&lt;br&gt;\&quot;event_data\&quot;: { \&quot;value\&quot;: 499, \&quot;order_quantity\&quot;: 1, \&quot;currency\&quot;: \&quot;USD\&quot;, \&quot;line_items\&quot;: [ { \&quot;product_name\&quot;: \&quot;Red leather boots\&quot;, \&quot;product_id\&quot;: \&quot;3486\&quot;, \&quot;product_category\&quot;: \&quot;shoe\&quot;, \&quot;product_variant_id\&quot;: \&quot;JB11103000\&quot;, \&quot;product_price\&quot;: 499, \&quot;product_quantity\&quot;: \&quot;1\&quot;, \&quot;product_brand\&quot;: \&quot;My brand\&quot; }]}&lt;br&gt;&#x60;watchvideo&#x60;&lt;br&gt;\&quot;event_data\&quot;: { \&quot;video_title\&quot;: \&quot;My Product Video 01\&quot; }&lt;br&gt;&#x60;lead&#x60;&lt;br&gt;\&quot;event_data\&quot;: { \&quot;lead_type\&quot;: \&quot;Newsletter\&quot; }
 */

#ifndef OAIPinterestTagEventData_H
#define OAIPinterestTagEventData_H

#include <QJsonObject>

#include "OAICurrency.h"
#include "OAILineItem.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAILineItem;

class OAIPinterestTagEventData : public OAIObject {
public:
    OAIPinterestTagEventData();
    OAIPinterestTagEventData(QString json);
    ~OAIPinterestTagEventData() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICurrency getCurrency() const;
    void setCurrency(const OAICurrency &currency);
    bool is_currency_Set() const;
    bool is_currency_Valid() const;

    QString getLeadType() const;
    void setLeadType(const QString &lead_type);
    bool is_lead_type_Set() const;
    bool is_lead_type_Valid() const;

    OAILineItem getLineItems() const;
    void setLineItems(const OAILineItem &line_items);
    bool is_line_items_Set() const;
    bool is_line_items_Valid() const;

    QString getOrderId() const;
    void setOrderId(const QString &order_id);
    bool is_order_id_Set() const;
    bool is_order_id_Valid() const;

    qint32 getOrderQuantity() const;
    void setOrderQuantity(const qint32 &order_quantity);
    bool is_order_quantity_Set() const;
    bool is_order_quantity_Valid() const;

    QString getPageName() const;
    void setPageName(const QString &page_name);
    bool is_page_name_Set() const;
    bool is_page_name_Valid() const;

    QString getPromoCode() const;
    void setPromoCode(const QString &promo_code);
    bool is_promo_code_Set() const;
    bool is_promo_code_Valid() const;

    QString getProperty() const;
    void setProperty(const QString &property);
    bool is_property_Set() const;
    bool is_property_Valid() const;

    QString getSearchQuery() const;
    void setSearchQuery(const QString &search_query);
    bool is_search_query_Set() const;
    bool is_search_query_Valid() const;

    QString getValue() const;
    void setValue(const QString &value);
    bool is_value_Set() const;
    bool is_value_Valid() const;

    QString getVideoTitle() const;
    void setVideoTitle(const QString &video_title);
    bool is_video_title_Set() const;
    bool is_video_title_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICurrency m_currency;
    bool m_currency_isSet;
    bool m_currency_isValid;

    QString m_lead_type;
    bool m_lead_type_isSet;
    bool m_lead_type_isValid;

    OAILineItem m_line_items;
    bool m_line_items_isSet;
    bool m_line_items_isValid;

    QString m_order_id;
    bool m_order_id_isSet;
    bool m_order_id_isValid;

    qint32 m_order_quantity;
    bool m_order_quantity_isSet;
    bool m_order_quantity_isValid;

    QString m_page_name;
    bool m_page_name_isSet;
    bool m_page_name_isValid;

    QString m_promo_code;
    bool m_promo_code_isSet;
    bool m_promo_code_isValid;

    QString m_property;
    bool m_property_isSet;
    bool m_property_isValid;

    QString m_search_query;
    bool m_search_query_isSet;
    bool m_search_query_isValid;

    QString m_value;
    bool m_value_isSet;
    bool m_value_isValid;

    QString m_video_title;
    bool m_video_title_isSet;
    bool m_video_title_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPinterestTagEventData)

#endif // OAIPinterestTagEventData_H
