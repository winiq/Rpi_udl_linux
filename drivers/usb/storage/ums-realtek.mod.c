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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x639fcadd, "usb_stor_bulk_transfer_buf" },
	{ 0x9796a617, "usb_stor_post_reset" },
	{ 0x8795ac9, "usb_stor_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdc0b5074, "usb_autopm_get_interface" },
	{ 0x54e9dd8d, "usb_enable_autosuspend" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x642898ba, "usb_stor_disconnect" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0xe150a133, "usb_autopm_put_interface_async" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x31239651, "usb_stor_probe2" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xce582711, "usb_stor_host_template_init" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0x59ea7166, "usb_stor_pre_reset" },
	{ 0xecb2a27b, "usb_stor_reset_resume" },
	{ 0x557c933d, "usb_stor_probe1" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xc20cc8d8, "pm_runtime_set_autosuspend_delay" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp0138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0158d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0159d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0184d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E6B18FBA34A59463071477E");
