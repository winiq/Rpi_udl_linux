#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x478adb45, "drm_release" },
	{ 0xe956238c, "drm_atomic_get_connector_state" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2174f648, "drm_dev_register" },
	{ 0x34760d05, "drm_compat_ioctl" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xacfecb90, "drm_mode_config_helper_resume" },
	{ 0x892621e6, "usb_sg_wait" },
	{ 0xc015459a, "drm_modeset_drop_locks" },
	{ 0x6ef2f78e, "drm_format_info" },
	{ 0xbbf4b2f0, "drm_mode_config_reset" },
	{ 0x263b9f14, "drm_atomic_helper_connector_reset" },
	{ 0xec9456ad, "drm_atomic_state_clear" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0x7ae669d0, "drm_fb_xrgb8888_to_gray8" },
	{ 0xcb081376, "drm_mode_create_tv_margin_properties" },
	{ 0x84744745, "backlight_device_register" },
	{ 0x63328b8a, "drm_gem_prime_import_dev" },
	{ 0x702f6dc9, "drm_modeset_backoff" },
	{ 0x4b1cd471, "drm_plane_create_rotation_property" },
	{ 0x7cdc1a9e, "drm_helper_probe_single_connector_modes" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2ceaa712, "drm_gem_fb_begin_cpu_access" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x49789bf3, "drm_simple_encoder_init" },
	{ 0x22b3cd10, "drm_modeset_acquire_fini" },
	{ 0xb90545b8, "drm_connector_list_iter_next" },
	{ 0x838a8fa0, "drm_fb_memcpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd651913f, "drm_connector_cleanup" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xacf1e92e, "drm_do_get_edid" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x3563484e, "drm_simple_display_pipe_init" },
	{ 0x7e80de26, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xd92e68c5, "drm_fbdev_generic_setup" },
	{ 0x104c60b0, "drm_connector_update_edid_property" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x13dc515a, "drmm_kmalloc" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x85428465, "drm_gem_shmem_prime_import_sg_table" },
	{ 0x5121828b, "drm_atomic_state_alloc" },
	{ 0xa23e5f54, "__devm_drm_dev_alloc" },
	{ 0x692d02f5, "sg_alloc_table_from_pages_segment" },
	{ 0x942d967d, "drm_atomic_commit" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x53dd0af1, "drm_object_attach_property" },
	{ 0xc15e0557, "drm_mode_create_tv_properties" },
	{ 0x80873224, "drm_gem_fb_vunmap" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0xccc59759, "drm_format_info_block_width" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5f7b2709, "drm_gem_fb_create_with_dirty" },
	{ 0xf1dfd000, "drm_read" },
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xaa48f477, "drm_atomic_helper_damage_merged" },
	{ 0xba5a062, "drm_add_edid_modes" },
	{ 0xc1e0d921, "usb_intf_get_dma_device" },
	{ 0x48a91171, "string_get_size" },
	{ 0x2255a7, "drm_mode_config_helper_suspend" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb2351ad2, "devm_kfree" },
	{ 0xbdc44335, "drm_debugfs_create_files" },
	{ 0xf5b693f6, "drm_connector_init" },
	{ 0x8a5df33e, "drm_dev_unplug" },
	{ 0xb22dfd68, "drm_format_info_min_pitch" },
	{ 0xf61d7e9d, "drm_gem_prime_fd_to_handle" },
	{ 0x3bc78e1a, "drm_gem_fb_vmap" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0x90ce3c67, "drm_ioctl" },
	{ 0x7baafe, "drm_mode_create" },
	{ 0x70c46013, "drm_gem_mmap" },
	{ 0x3c30fd11, "drm_connector_list_iter_end" },
	{ 0x6a725913, "drm_atomic_helper_connector_destroy_state" },
	{ 0xe1340cb3, "drm_atomic_helper_check" },
	{ 0x81822a88, "put_device" },
	{ 0x5fb6e8cb, "drm_atomic_helper_commit" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x6daf954, "usb_sg_cancel" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x20cf3f7f, "drm_connector_attach_encoder" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x993acea8, "drm_mode_object_put" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xe4129903, "drmm_mode_config_init" },
	{ 0x255c42d2, "drm_gem_prime_handle_to_fd" },
	{ 0xef694b55, "drm_modeset_acquire_init" },
	{ 0x4f4d78c5, "LZ4_compress_default" },
	{ 0xc66c93f7, "drm_connector_list_iter_begin" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3bee7529, "drm_mode_object_get" },
	{ 0x7c167b80, "usb_sg_init" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x21066894, "drm_atomic_helper_shutdown" },
	{ 0xcd7668cb, "drm_gem_prime_mmap" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x421470fc, "drm_gem_shmem_dumb_create" },
	{ 0x95069563, "drm_mode_probed_add" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x68c38fa4, "vmalloc_to_page" },
	{ 0xdddb2fc2, "drm_dev_dbg" },
	{ 0x99285c03, "drm_plane_enable_fb_damage_clips" },
	{ 0xc3834c15, "drm_kms_helper_poll_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x4b5a0671, "backlight_device_unregister" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc86884b4, "drm_atomic_helper_connector_tv_reset" },
	{ 0xf82ae419, "drm_dev_enter" },
	{ 0xc0929501, "drm_gem_fb_end_cpu_access" },
	{ 0xcf999106, "drm_poll" },
	{ 0x4e41ad5c, "drm_fb_xrgb8888_to_rgb565" },
	{ 0xef2b6d3f, "drm_open" },
	{ 0xd3decf3b, "drm_kms_helper_poll_fini" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,backlight");

MODULE_ALIAS("usb:v1D50p614Dd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v16D0p10A9d*dc*dsc*dp*icFFisc*ip*in*");

MODULE_INFO(srcversion, "440D743F4E5364FE285633A");
