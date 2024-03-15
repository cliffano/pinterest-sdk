<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

class CatalogsItemValidationIssues
{
    /**
     * Item number based on order of appearance in the Catalogs Feed. For example, &#39;0&#39; refers to first item found in a feed that was downloaded from a &#39;location&#39; specified during feed creation.
     * @DTA\Data(field="item_number")
     * @DTA\Validator(name="Scalar", options={"type":"int"})
     */
    public ?int $item_number = null;

    /**
     * The merchant-created unique ID that represents the product.
     * @DTA\Data(field="item_id")
     * @DTA\Validator(name="Scalar", options={"type":"string"})
     */
    public ?string $item_id = null;

    /**
     * @DTA\Data(field="errors")
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\CatalogsItemValidationErrors::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\CatalogsItemValidationErrors::class})
     */
    public ?\App\DTO\CatalogsItemValidationErrors $errors = null;

    /**
     * @DTA\Data(field="warnings")
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\CatalogsItemValidationWarnings::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\CatalogsItemValidationWarnings::class})
     */
    public ?\App\DTO\CatalogsItemValidationWarnings $warnings = null;

}
