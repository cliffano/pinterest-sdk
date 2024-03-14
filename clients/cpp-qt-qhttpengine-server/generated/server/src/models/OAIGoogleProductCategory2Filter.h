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
 * OAIGoogleProductCategory2Filter.h
 *
 * 
 */

#ifndef OAIGoogleProductCategory2Filter_H
#define OAIGoogleProductCategory2Filter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupMultipleStringListCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIGoogleProductCategory2Filter : public OAIObject {
public:
    OAIGoogleProductCategory2Filter();
    OAIGoogleProductCategory2Filter(QString json);
    ~OAIGoogleProductCategory2Filter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupMultipleStringListCriteria getGoogleProductCategory2() const;
    void setGoogleProductCategory2(const OAICatalogsProductGroupMultipleStringListCriteria &google_product_category_2);
    bool is_google_product_category_2_Set() const;
    bool is_google_product_category_2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupMultipleStringListCriteria google_product_category_2;
    bool m_google_product_category_2_isSet;
    bool m_google_product_category_2_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIGoogleProductCategory2Filter)

#endif // OAIGoogleProductCategory2Filter_H