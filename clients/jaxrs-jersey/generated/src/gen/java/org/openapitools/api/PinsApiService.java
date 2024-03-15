package org.openapitools.api;

import org.openapitools.api.*;

import org.glassfish.jersey.media.multipart.FormDataBodyPart;

import java.util.Date;
import org.openapitools.model.Error;
import java.util.Map;
import org.openapitools.model.Pin;
import org.openapitools.model.PinAnalyticsMetricsResponse;
import org.openapitools.model.PinCreate;
import org.openapitools.model.PinUpdate;
import org.openapitools.model.PinsAnalyticsMetricTypesParameterInner;
import org.openapitools.model.PinsList200Response;
import org.openapitools.model.PinsSaveRequest;

import java.util.List;
import org.openapitools.api.NotFoundException;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.validation.constraints.*;
import javax.validation.Valid;
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public abstract class PinsApiService {
    public abstract Response pinsAnalytics(String pinId, @NotNull Date startDate, @NotNull Date endDate, @NotNull List<PinsAnalyticsMetricTypesParameterInner> metricTypes,String appTypes,String splitField, @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response pinsCreate(PinCreate pinCreate, @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response pinsDelete(String pinId, @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response pinsGet(String pinId,Boolean pinMetrics, @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response pinsList(String bookmark, @Min(1) @Max(250)Integer pageSize,String pinFilter,Boolean includeProtectedPins,String pinType,List<String> creativeTypes, @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,Boolean pinMetrics,SecurityContext securityContext) throws NotFoundException;
    public abstract Response pinsSave(String pinId,PinsSaveRequest pinsSaveRequest, @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response pinsUpdate(String pinId,PinUpdate pinUpdate, @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,SecurityContext securityContext) throws NotFoundException;
}
