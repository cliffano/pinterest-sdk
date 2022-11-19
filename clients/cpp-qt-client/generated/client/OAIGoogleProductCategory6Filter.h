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
 * OAIGoogleProductCategory6Filter.h
 *
 * 
 */

#ifndef OAIGoogleProductCategory6Filter_H
#define OAIGoogleProductCategory6Filter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupMultipleStringListCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIGoogleProductCategory6Filter : public OAIObject {
public:
    OAIGoogleProductCategory6Filter();
    OAIGoogleProductCategory6Filter(QString json);
    ~OAIGoogleProductCategory6Filter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupMultipleStringListCriteria getGoogleProductCategory6() const;
    void setGoogleProductCategory6(const OAICatalogsProductGroupMultipleStringListCriteria &google_product_category_6);
    bool is_google_product_category_6_Set() const;
    bool is_google_product_category_6_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupMultipleStringListCriteria google_product_category_6;
    bool m_google_product_category_6_isSet;
    bool m_google_product_category_6_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIGoogleProductCategory6Filter)

#endif // OAIGoogleProductCategory6Filter_H
