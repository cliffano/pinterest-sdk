/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIProductType4Filter.h
 *
 * 
 */

#ifndef OAIProductType4Filter_H
#define OAIProductType4Filter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupMultipleStringListCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductType4Filter : public OAIObject {
public:
    OAIProductType4Filter();
    OAIProductType4Filter(QString json);
    ~OAIProductType4Filter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupMultipleStringListCriteria getProductType4() const;
    void setProductType4(const OAICatalogsProductGroupMultipleStringListCriteria &product_type_4);
    bool is_product_type_4_Set() const;
    bool is_product_type_4_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupMultipleStringListCriteria product_type_4;
    bool m_product_type_4_isSet;
    bool m_product_type_4_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductType4Filter)

#endif // OAIProductType4Filter_H
