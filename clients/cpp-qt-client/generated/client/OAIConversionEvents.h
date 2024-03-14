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
 * OAIConversionEvents.h
 *
 * A list of events (one or more) encapsulated by a data object.
 */

#ifndef OAIConversionEvents_H
#define OAIConversionEvents_H

#include <QJsonObject>

#include "OAIConversionEvents_data_inner.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIConversionEvents_data_inner;

class OAIConversionEvents : public OAIObject {
public:
    OAIConversionEvents();
    OAIConversionEvents(QString json);
    ~OAIConversionEvents() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIConversionEvents_data_inner> getData() const;
    void setData(const QList<OAIConversionEvents_data_inner> &data);
    bool is_data_Set() const;
    bool is_data_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIConversionEvents_data_inner> m_data;
    bool m_data_isSet;
    bool m_data_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIConversionEvents)

#endif // OAIConversionEvents_H
