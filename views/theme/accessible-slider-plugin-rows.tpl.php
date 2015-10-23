<div data-caption="caption#<?php print $view->row_index; ?>">
	<?php print $image ?>
</div>

  <div class="carousel-caption">
    <?php if (!empty($title)): ?>
      <div class="caption-header"><?php print $title ?></div>
    <?php endif ?>

    <?php if (!empty($description)): ?>
     <div class="carousel-description">
      <p><?php print $description ?></p>
     </div>
    <?php endif ?>

    <?php if (!empty($link)): ?>
      <div class="carousel-link"><a href="<?php print $link; ?>"><?php print $link_text;?></a></div>
    <?php endif ?>
  </div>
