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
	{ 0xc313ff9a, "_dev_printk" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0x18e2e423, "i2c_new_client_device" },
	{ 0xca58e44a, "i2c_unregister_device" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4f18a150, "__drm_debug" },
	{ 0x923e6188, "drm_i2c_encoder_destroy" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("i2c:sil164");

MODULE_INFO(srcversion, "688BB19B71AFAB3A6AB9ABC");
