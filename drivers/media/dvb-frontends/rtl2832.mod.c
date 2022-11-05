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
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8733236, "intlog10" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x5d389380, "regmap_bulk_write" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0xaffb9cd2, "i2c_mux_add_adapter" },
	{ 0x7f57c791, "i2c_mux_alloc" },
	{ 0xbed7bbde, "__regmap_init_i2c" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xff56896e, "regmap_bulk_read" },
	{ 0x37a0cba, "kfree" },
	{ 0xf306da06, "regmap_exit" },
	{ 0xc0736ccc, "i2c_mux_del_adapters" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
};

MODULE_INFO(depends, "dvb-core,i2c-mux");

MODULE_ALIAS("i2c:rtl2832");

MODULE_INFO(srcversion, "6E384FDD96851071CBFD35F");
