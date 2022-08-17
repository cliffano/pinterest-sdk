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
 * OAIProductType1Filter.h
 *
 * 
 */

#ifndef OAIProductType1Filter_H
#define OAIProductType1Filter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupMultipleStringListCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductType1Filter : public OAIObject {
public:
    OAIProductType1Filter();
    OAIProductType1Filter(QString json);
    ~OAIProductType1Filter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupMultipleStringListCriteria getProductType1() const;
    void setProductType1(const OAICatalogsProductGroupMultipleStringListCriteria &product_type_1);
    bool is_product_type_1_Set() const;
    bool is_product_type_1_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupMultipleStringListCriteria product_type_1;
    bool m_product_type_1_isSet;
    bool m_product_type_1_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductType1Filter)

#endif // OAIProductType1Filter_H
