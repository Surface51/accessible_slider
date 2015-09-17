<div data-caption="caption#<?php print $view->row_index; ?>">
	<?php print $image ?>
</div>

<?php if (!empty($title) || !empty($description)): ?>
  <div class="carousel-caption">
    <?php if (!empty($title)): ?>
      <div class="caption-header"><?php print $title ?></div>
    <?php endif ?>

    <?php if (!empty($description)): ?>
     <div class="hidden-xs hidden-sm">
      <p><?php print $description ?></p>
     </div>
    <?php endif ?>

    <?php if (!empty($link)): ?>
      <h2><a href="<?php print $link ?>">Page Link</a></h2>
    <?php endif ?>
  </div>
<?php endif ?>
