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
	{ 0xed33f52c, "bus_register" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x26a7300c, "driver_register" },
	{ 0x73053428, "dev_err_probe" },
	{ 0xf25cb4f4, "of_device_uevent_modalias" },
	{ 0x7392091d, "device_register" },
	{ 0xadcac529, "driver_unregister" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xea9dab3c, "bus_unregister" },
	{ 0x6ad73e27, "of_match_device" },
	{ 0xbcb3aa08, "of_get_child_by_name" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0x469d7754, "dev_pm_domain_detach" },
	{ 0x9893064e, "device_for_each_child_reverse" },
	{ 0x81822a88, "put_device" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x5919b3b4, "of_get_next_available_child" },
	{ 0xf4037811, "dev_pm_domain_attach" },
	{ 0xf2b157ac, "of_node_get" },
	{ 0xd54858ff, "of_device_modalias" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcdcb000, "device_unregister" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3C78294FCB502340D6018A3");
