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
 * OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1.h
 *
 * 
 */

#ifndef OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1_H
#define OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1_H

#include <QJsonObject>

#include "OAICatalogsProductGroupFilterKeys.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1 : public OAIObject {
public:
    OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1();
    OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1(QString json);
    ~OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICatalogsProductGroupFilterKeys> getAllOf() const;
    void setAllOf(const QList<OAICatalogsProductGroupFilterKeys> &all_of);
    bool is_all_of_Set() const;
    bool is_all_of_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICatalogsProductGroupFilterKeys> m_all_of;
    bool m_all_of_isSet;
    bool m_all_of_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1)

#endif // OAICatalogsProductGroupFiltersAllOfRequest_anyOf_1_H
