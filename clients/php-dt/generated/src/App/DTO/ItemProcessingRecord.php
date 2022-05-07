<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

/**
 * Object describing an item processing record
 */
class ItemProcessingRecord
{
    /**
     * The catalog item id in the merchant namespace
     * @DTA\Data(field="item_id", nullable=true)
     * @DTA\Validator(name="Scalar", options={"type":"string"})
     * @var string|null
     */
    public $item_id;

    /**
     * Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail.
     * @DTA\Data(field="errors", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\Collection48::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\Collection48::class})
     * @var \App\DTO\Collection48|null
     */
    public $errors;

    /**
     * Array with the validation warnings for the item processing record
     * @DTA\Data(field="warnings", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\Collection49::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\Collection49::class})
     * @var \App\DTO\Collection49|null
     */
    public $warnings;

    /**
     * @DTA\Data(field="status", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\ItemProcessingStatus::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\ItemProcessingStatus::class})
     * @var \App\DTO\ItemProcessingStatus|null
     */
    public $status;

}
