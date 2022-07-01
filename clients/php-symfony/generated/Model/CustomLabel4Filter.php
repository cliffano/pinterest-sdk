<?php
/**
 * CustomLabel4Filter
 *
 * PHP version 7.1.3
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the CustomLabel4Filter model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class CustomLabel4Filter 
{
        /**
     * @var OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria
     * @SerializedName("CUSTOM_LABEL_4")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria")
     * @Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria")
     */
    protected $cUSTOMLABEL4;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->cUSTOMLABEL4 = isset($data['cUSTOMLABEL4']) ? $data['cUSTOMLABEL4'] : null;
    }

    /**
     * Gets cUSTOMLABEL4.
     *
     * @return OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria
     */
    public function getCUSTOMLABEL4(): CatalogsProductGroupMultipleStringCriteria
    {
        return $this->cUSTOMLABEL4;
    }

    /**
     * Sets cUSTOMLABEL4.
     *
     * @param OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria $cUSTOMLABEL4
     *
     * @return $this
     */
    public function setCUSTOMLABEL4(CatalogsProductGroupMultipleStringCriteria $cUSTOMLABEL4)
    {
        $this->cUSTOMLABEL4 = $cUSTOMLABEL4;

        return $this;
    }
}


