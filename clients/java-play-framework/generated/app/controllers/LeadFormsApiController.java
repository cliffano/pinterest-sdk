package controllers;

import apimodels.Error;
import apimodels.LeadFormResponse;
import apimodels.LeadFormTestRequest;
import apimodels.LeadFormTestResponse;
import apimodels.LeadFormsList200Response;

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
public class LeadFormsApiController extends Controller {
    private final LeadFormsApiControllerImpInterface imp;
    private final ObjectMapper mapper;
    private final Config configuration;

    @Inject
    private LeadFormsApiController(Config configuration, LeadFormsApiControllerImpInterface imp) {
        this.imp = imp;
        mapper = new ObjectMapper();
        this.configuration = configuration;
    }

    @ApiAction
    public Result leadFormGet(Http.Request request,  @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$")String leadFormId) throws Exception {
        return imp.leadFormGetHttp(request, adAccountId, leadFormId);
    }

    @ApiAction
    public Result leadFormTestCreate(Http.Request request,  @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$")String leadFormId) throws Exception {
        JsonNode nodeleadFormTestRequest = request.body().asJson();
        LeadFormTestRequest leadFormTestRequest;
        if (nodeleadFormTestRequest != null) {
            leadFormTestRequest = mapper.readValue(nodeleadFormTestRequest.toString(), LeadFormTestRequest.class);
            if (configuration.getBoolean("useInputBeanValidation")) {
                OpenAPIUtils.validate(leadFormTestRequest);
            }
        } else {
            throw new IllegalArgumentException("'LeadFormTestRequest' parameter is required");
        }
        return imp.leadFormTestCreateHttp(request, adAccountId, leadFormId, leadFormTestRequest);
    }

    @ApiAction
    public Result leadFormsList(Http.Request request,  @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId) throws Exception {
        String valuepageSize = request.getQueryString("page_size");
        Integer pageSize;
        if (valuepageSize != null) {
            pageSize = Integer.parseInt(valuepageSize);
        } else {
            pageSize = 25;
        }
        String valueorder = request.getQueryString("order");
        String order;
        if (valueorder != null) {
            order = valueorder;
        } else {
            order = null;
        }
        String valuebookmark = request.getQueryString("bookmark");
        String bookmark;
        if (valuebookmark != null) {
            bookmark = valuebookmark;
        } else {
            bookmark = null;
        }
        return imp.leadFormsListHttp(request, adAccountId, pageSize, order, bookmark);
    }

}
