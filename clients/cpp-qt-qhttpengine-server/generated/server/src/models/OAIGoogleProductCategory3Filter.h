/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIGoogleProductCategory3Filter.h
 *
 * 
 */

#ifndef OAIGoogleProductCategory3Filter_H
#define OAIGoogleProductCategory3Filter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupMultipleStringListCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIGoogleProductCategory3Filter : public OAIObject {
public:
    OAIGoogleProductCategory3Filter();
    OAIGoogleProductCategory3Filter(QString json);
    ~OAIGoogleProductCategory3Filter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupMultipleStringListCriteria getGoogleProductCategory3() const;
    void setGoogleProductCategory3(const OAICatalogsProductGroupMultipleStringListCriteria &google_product_category_3);
    bool is_google_product_category_3_Set() const;
    bool is_google_product_category_3_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupMultipleStringListCriteria google_product_category_3;
    bool m_google_product_category_3_isSet;
    bool m_google_product_category_3_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIGoogleProductCategory3Filter)

#endif // OAIGoogleProductCategory3Filter_H
