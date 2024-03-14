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
 * OAIConversionEvents_data_inner_custom_data.h
 *
 * Object containing other custom data.
 */

#ifndef OAIConversionEvents_data_inner_custom_data_H
#define OAIConversionEvents_data_inner_custom_data_H

#include <QJsonObject>

#include "OAIConversionEvents_data_inner_custom_data_contents_inner.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIConversionEvents_data_inner_custom_data : public OAIObject {
public:
    OAIConversionEvents_data_inner_custom_data();
    OAIConversionEvents_data_inner_custom_data(QString json);
    ~OAIConversionEvents_data_inner_custom_data() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCurrency() const;
    void setCurrency(const QString &currency);
    bool is_currency_Set() const;
    bool is_currency_Valid() const;

    QString getValue() const;
    void setValue(const QString &value);
    bool is_value_Set() const;
    bool is_value_Valid() const;

    QList<QString> getContentIds() const;
    void setContentIds(const QList<QString> &content_ids);
    bool is_content_ids_Set() const;
    bool is_content_ids_Valid() const;

    QList<OAIConversionEvents_data_inner_custom_data_contents_inner> getContents() const;
    void setContents(const QList<OAIConversionEvents_data_inner_custom_data_contents_inner> &contents);
    bool is_contents_Set() const;
    bool is_contents_Valid() const;

    qint64 getNumItems() const;
    void setNumItems(const qint64 &num_items);
    bool is_num_items_Set() const;
    bool is_num_items_Valid() const;

    QString getOrderId() const;
    void setOrderId(const QString &order_id);
    bool is_order_id_Set() const;
    bool is_order_id_Valid() const;

    QString getSearchString() const;
    void setSearchString(const QString &search_string);
    bool is_search_string_Set() const;
    bool is_search_string_Valid() const;

    QString getOptOutType() const;
    void setOptOutType(const QString &opt_out_type);
    bool is_opt_out_type_Set() const;
    bool is_opt_out_type_Valid() const;

    QString getNp() const;
    void setNp(const QString &np);
    bool is_np_Set() const;
    bool is_np_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString currency;
    bool m_currency_isSet;
    bool m_currency_isValid;

    QString value;
    bool m_value_isSet;
    bool m_value_isValid;

    QList<QString> content_ids;
    bool m_content_ids_isSet;
    bool m_content_ids_isValid;

    QList<OAIConversionEvents_data_inner_custom_data_contents_inner> contents;
    bool m_contents_isSet;
    bool m_contents_isValid;

    qint64 num_items;
    bool m_num_items_isSet;
    bool m_num_items_isValid;

    QString order_id;
    bool m_order_id_isSet;
    bool m_order_id_isValid;

    QString search_string;
    bool m_search_string_isSet;
    bool m_search_string_isValid;

    QString opt_out_type;
    bool m_opt_out_type_isSet;
    bool m_opt_out_type_isValid;

    QString np;
    bool m_np_isSet;
    bool m_np_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIConversionEvents_data_inner_custom_data)

#endif // OAIConversionEvents_data_inner_custom_data_H
