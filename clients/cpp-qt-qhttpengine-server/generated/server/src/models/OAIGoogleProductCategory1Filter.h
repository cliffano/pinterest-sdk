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
 * OAIGoogleProductCategory1Filter.h
 *
 * 
 */

#ifndef OAIGoogleProductCategory1Filter_H
#define OAIGoogleProductCategory1Filter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupMultipleStringListCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIGoogleProductCategory1Filter : public OAIObject {
public:
    OAIGoogleProductCategory1Filter();
    OAIGoogleProductCategory1Filter(QString json);
    ~OAIGoogleProductCategory1Filter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupMultipleStringListCriteria getGoogleProductCategory1() const;
    void setGoogleProductCategory1(const OAICatalogsProductGroupMultipleStringListCriteria &google_product_category_1);
    bool is_google_product_category_1_Set() const;
    bool is_google_product_category_1_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupMultipleStringListCriteria google_product_category_1;
    bool m_google_product_category_1_isSet;
    bool m_google_product_category_1_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIGoogleProductCategory1Filter)

#endif // OAIGoogleProductCategory1Filter_H
