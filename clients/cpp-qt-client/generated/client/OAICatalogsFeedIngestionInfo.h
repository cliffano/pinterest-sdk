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
 * OAICatalogsFeedIngestionInfo.h
 *
 * 
 */

#ifndef OAICatalogsFeedIngestionInfo_H
#define OAICatalogsFeedIngestionInfo_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsFeedIngestionInfo : public OAIObject {
public:
    OAICatalogsFeedIngestionInfo();
    OAICatalogsFeedIngestionInfo(QString json);
    ~OAICatalogsFeedIngestionInfo() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getInStock() const;
    void setInStock(const qint32 &in_stock);
    bool is_in_stock_Set() const;
    bool is_in_stock_Valid() const;

    qint32 getOutOfStock() const;
    void setOutOfStock(const qint32 &out_of_stock);
    bool is_out_of_stock_Set() const;
    bool is_out_of_stock_Valid() const;

    qint32 getPreorder() const;
    void setPreorder(const qint32 &preorder);
    bool is_preorder_Set() const;
    bool is_preorder_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 in_stock;
    bool m_in_stock_isSet;
    bool m_in_stock_isValid;

    qint32 out_of_stock;
    bool m_out_of_stock_isSet;
    bool m_out_of_stock_isValid;

    qint32 preorder;
    bool m_preorder_isSet;
    bool m_preorder_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsFeedIngestionInfo)

#endif // OAICatalogsFeedIngestionInfo_H
