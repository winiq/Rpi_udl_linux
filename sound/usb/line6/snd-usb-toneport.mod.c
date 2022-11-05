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
	{ 0xabaa3a37, "line6_read_serial_number" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xd823f430, "line6_resume" },
	{ 0xe3de3848, "line6_probe" },
	{ 0x8699a098, "line6_write_data" },
	{ 0x61add75d, "line6_disconnect" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xe39b87bb, "line6_pcm_release" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x913feb98, "line6_pcm_acquire" },
	{ 0x966957d4, "led_classdev_register_ext" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x1b2f591a, "line6_init_pcm" },
	{ 0x7c1c9029, "line6_suspend" },
	{ 0xfab177d4, "line6_read_data" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xffaa0890, "snd_ctl_new1" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xfaf784d, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xc2a2a05b, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8d0f80af, "snd_ctl_add" },
	{ 0x5234a212, "usb_control_msg_send" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p4750d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4151d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4147d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4141d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4142d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "52589F8A3BD64DE56231748");
