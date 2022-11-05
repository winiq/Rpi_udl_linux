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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x9796a617, "usb_stor_post_reset" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x642898ba, "usb_stor_disconnect" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x5792f848, "strlcpy" },
	{ 0x31239651, "usb_stor_probe2" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xce582711, "usb_stor_host_template_init" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x59ea7166, "usb_stor_pre_reset" },
	{ 0xecb2a27b, "usb_stor_reset_resume" },
	{ 0xedcc9acb, "usb_stor_suspend" },
	{ 0xc5933243, "input_free_device" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x557c933d, "usb_stor_probe1" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xd4a38771, "usb_stor_resume" },
	{ 0x34fa48c2, "input_unregister_device" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x2e518b1f, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0D49p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D49p7010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "40449D9C00F755AFC178C6F");
