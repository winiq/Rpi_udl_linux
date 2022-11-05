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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x6d5ef163, "vchiq_release_message" },
	{ 0x326b3c51, "snd_pcm_hw_constraint_step" },
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0x83ef09b3, "snd_pcm_period_elapsed" },
	{ 0x1578e3fb, "devres_find" },
	{ 0x92b2feb4, "vchiq_bulk_transmit" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcb1ea16, "snd_pcm_stream_lock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x2f8c431, "vchiq_queue_kernel_message" },
	{ 0xb05b02ae, "vchiq_release_service" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x4e727df3, "snd_pcm_set_managed_buffer_all" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x27984a03, "snd_pcm_set_ops" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x8ff6c2b1, "vchiq_get_peer_version" },
	{ 0x93c1e1f1, "__devres_alloc_node" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb6b7c510, "snd_card_new" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5407bc14, "snd_pcm_stream_unlock" },
	{ 0x469ae1ba, "vchiq_shutdown" },
	{ 0xffaa0890, "snd_ctl_new1" },
	{ 0xe95e0941, "vchiq_close_service" },
	{ 0xd1563929, "vchiq_open_service" },
	{ 0x7ba780fd, "devres_add" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xfdf39630, "rpi_firmware_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x7bd8e819, "vchiq_initialise" },
	{ 0xa13a7a1e, "snd_pcm_hw_constraint_minmax" },
	{ 0xa0118b13, "snd_pcm_stop" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x89c97189, "snd_card_free" },
	{ 0xc2a2a05b, "snd_card_register" },
	{ 0x1c60d406, "vchiq_get_service_userdata" },
	{ 0xd90fd29a, "vchiq_connect" },
	{ 0xa6257a2f, "complete" },
	{ 0x1b28395f, "snd_pcm_new" },
	{ 0x8d0f80af, "snd_ctl_add" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x9d6478fe, "vchiq_use_service" },
};

MODULE_INFO(depends, "snd-pcm,snd");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-audio");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-audioC*");

MODULE_INFO(srcversion, "7FA5309AB9281A52E202785");
