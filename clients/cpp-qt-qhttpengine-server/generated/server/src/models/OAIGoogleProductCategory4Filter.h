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
 * OAIGoogleProductCategory4Filter.h
 *
 * 
 */

#ifndef OAIGoogleProductCategory4Filter_H
#define OAIGoogleProductCategory4Filter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupMultipleStringListCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIGoogleProductCategory4Filter : public OAIObject {
public:
    OAIGoogleProductCategory4Filter();
    OAIGoogleProductCategory4Filter(QString json);
    ~OAIGoogleProductCategory4Filter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupMultipleStringListCriteria getGoogleProductCategory4() const;
    void setGoogleProductCategory4(const OAICatalogsProductGroupMultipleStringListCriteria &google_product_category_4);
    bool is_google_product_category_4_Set() const;
    bool is_google_product_category_4_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupMultipleStringListCriteria google_product_category_4;
    bool m_google_product_category_4_isSet;
    bool m_google_product_category_4_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIGoogleProductCategory4Filter)

#endif // OAIGoogleProductCategory4Filter_H
