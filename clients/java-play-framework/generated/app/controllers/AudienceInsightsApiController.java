package controllers;

import apimodels.AudienceDefinitionResponse;
import apimodels.AudienceInsightType;
import apimodels.AudienceInsightsResponse;
import apimodels.Error;

import com.typesafe.config.Config;
import play.mvc.Controller;
import play.mvc.Result;
import play.mvc.Http;
import java.util.List;
import java.util.Map;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import com.fasterxml.jackson.databind.ObjectMapper;
import com.fasterxml.jackson.databind.JsonNode;
import com.google.inject.Inject;
import java.io.File;
import play.libs.Files.TemporaryFile;
import openapitools.OpenAPIUtils;
import com.fasterxml.jackson.core.type.TypeReference;

import javax.validation.constraints.*;
import javax.validation.Valid;
import com.typesafe.config.Config;

import openapitools.OpenAPIUtils.ApiAction;

@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPlayFrameworkCodegen", date = "2024-03-14T23:02:53.026613321Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class AudienceInsightsApiController extends Controller {
    private final AudienceInsightsApiControllerImpInterface imp;
    private final ObjectMapper mapper;
    private final Config configuration;

    @Inject
    private AudienceInsightsApiController(Config configuration, AudienceInsightsApiControllerImpInterface imp) {
        this.imp = imp;
        mapper = new ObjectMapper();
        this.configuration = configuration;
    }

    @ApiAction
    public Result audienceInsightsGet(Http.Request request,  @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId) throws Exception {
        String valueaudienceInsightType = request.getQueryString("audience_insight_type");
        AudienceInsightType audienceInsightType;
        if (valueaudienceInsightType != null) {
            audienceInsightType = valueaudienceInsightType;
        } else {
            throw new IllegalArgumentException("'audience_insight_type' parameter is required");
        }
        return imp.audienceInsightsGetHttp(request, adAccountId, audienceInsightType);
    }

    @ApiAction
    public Result audienceInsightsScopeAndTypeGet(Http.Request request,  @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId) throws Exception {
        return imp.audienceInsightsScopeAndTypeGetHttp(request, adAccountId);
    }

}
