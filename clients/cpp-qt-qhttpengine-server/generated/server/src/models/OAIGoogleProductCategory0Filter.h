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
 * OAIGoogleProductCategory0Filter.h
 *
 * 
 */

#ifndef OAIGoogleProductCategory0Filter_H
#define OAIGoogleProductCategory0Filter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupMultipleStringListCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIGoogleProductCategory0Filter : public OAIObject {
public:
    OAIGoogleProductCategory0Filter();
    OAIGoogleProductCategory0Filter(QString json);
    ~OAIGoogleProductCategory0Filter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupMultipleStringListCriteria getGoogleProductCategory0() const;
    void setGoogleProductCategory0(const OAICatalogsProductGroupMultipleStringListCriteria &google_product_category_0);
    bool is_google_product_category_0_Set() const;
    bool is_google_product_category_0_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupMultipleStringListCriteria google_product_category_0;
    bool m_google_product_category_0_isSet;
    bool m_google_product_category_0_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIGoogleProductCategory0Filter)

#endif // OAIGoogleProductCategory0Filter_H
