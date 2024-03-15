/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAITemplateResponse_date_range.h
 *
 * 
 */

#ifndef OAITemplateResponse_date_range_H
#define OAITemplateResponse_date_range_H

#include <QJsonObject>

#include "OAITemplateResponse_date_range_absolute_date_range.h"
#include "OAITemplateResponse_date_range_dynamic_date_range.h"
#include "OAITemplateResponse_date_range_relative_date_range.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAITemplateResponse_date_range_dynamic_date_range;
class OAITemplateResponse_date_range_relative_date_range;
class OAITemplateResponse_date_range_absolute_date_range;

class OAITemplateResponse_date_range : public OAIObject {
public:
    OAITemplateResponse_date_range();
    OAITemplateResponse_date_range(QString json);
    ~OAITemplateResponse_date_range() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAITemplateResponse_date_range_dynamic_date_range getDynamicDateRange() const;
    void setDynamicDateRange(const OAITemplateResponse_date_range_dynamic_date_range &dynamic_date_range);
    bool is_dynamic_date_range_Set() const;
    bool is_dynamic_date_range_Valid() const;

    OAITemplateResponse_date_range_relative_date_range getRelativeDateRange() const;
    void setRelativeDateRange(const OAITemplateResponse_date_range_relative_date_range &relative_date_range);
    bool is_relative_date_range_Set() const;
    bool is_relative_date_range_Valid() const;

    OAITemplateResponse_date_range_absolute_date_range getAbsoluteDateRange() const;
    void setAbsoluteDateRange(const OAITemplateResponse_date_range_absolute_date_range &absolute_date_range);
    bool is_absolute_date_range_Set() const;
    bool is_absolute_date_range_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAITemplateResponse_date_range_dynamic_date_range m_dynamic_date_range;
    bool m_dynamic_date_range_isSet;
    bool m_dynamic_date_range_isValid;

    OAITemplateResponse_date_range_relative_date_range m_relative_date_range;
    bool m_relative_date_range_isSet;
    bool m_relative_date_range_isValid;

    OAITemplateResponse_date_range_absolute_date_range m_absolute_date_range;
    bool m_absolute_date_range_isSet;
    bool m_absolute_date_range_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAITemplateResponse_date_range)

#endif // OAITemplateResponse_date_range_H