<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

/**
 * &lt;p&gt;Catalog product group type&lt;/p&gt; &lt;p&gt;MERCHANT_CREATED: Product groups created by merchants. &lt;br&gt;ALL_PRODUCTS: Consists of every product in your latest successful feed upload. &lt;br&gt;BEST_DEALS: Consists of products with the deepest drop in price. &lt;br&gt;PINNER_FAVORITES: Consists of products that are resonating most with people on Pinterest, based on engagement. &lt;br&gt;TOP_SELLERS: Consists of products with the highest conversion rate, if you have the conversion tag installed. &lt;br&gt;BACK_IN_STOCK: Consists of products that were previously out of stock and are now in stock. &lt;br&gt;NEW_ARRIVALS: Consists of products that are new to your Catalog. &lt;br&gt;SHOPIFY_COLLECTION: Product groups created based on Shopify Product Collections. &lt;br&gt;I2PC: Product groups created based on predicted product category.&lt;/p&gt;
 */
class CatalogsProductGroupType
{
}
