<?php
/**
 * @file
 *  Themes the user profile page
 */
// get user details
$user_name = $user_profile['field_sf_badge']['#object']->name;
$user_mail = $user_profile['field_sf_badge']['#object']->mail;
$user_since = $user_profile['summary']['member_for']['#markup'];
$user_badges = array();
foreach($user_profile['field_sf_badge']['#object']->field_sf_badge[LANGUAGE_NONE] as $v)
{
  $user_badges[] = $v['taxonomy_term']->name;
}
?>

<div class = 'user-profile-wrapper'>
  <div class = 'usr-attributes frst'>
    <span class = 'profile-label'>Name</span>
    <div><?php print $user_name; ?></div>
  </div>
  <div class = 'usr-attributes'>
    <span class = 'profile-label'>Email</span>
    <div><a href="mailto:<?php print $user_mail; ?>"><?php print $user_mail; ?></a></div>
  </div>
  <?php if(count($user_badges)): ?>
    <div class = 'usr-attributes'>
      <span class = 'profile-label'>Badges</span>
      <div>
        <ul>
          <?php
            foreach($user_badges as $val) {
          	  print '<li>' . $val . '</li>';
            }
          ?>
        </ul>
      </div>
    </div>
  <?php endif; ?>
  <div class = 'usr-attributes last'>
    <span class = 'profile-label'>Member for</span>
    <div><?php print $user_since; ?></div>
  </div>
</div>