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
	{ 0xde164253, "__platform_driver_register" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8803367b, "of_reserved_mem_lookup" },
	{ 0x4d924f20, "memremap" },
	{ 0x32d7099a, "devm_nvmem_register" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xc6f3cca5, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnvmem-rmem");
MODULE_ALIAS("of:N*T*Cnvmem-rmemC*");

MODULE_INFO(srcversion, "97659167CA43CF1E43C28BC");
